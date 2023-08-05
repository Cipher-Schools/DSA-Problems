async function resolve1() {
  setTimeout(() => {
    console.log("resolve 1 executed");
  }, 2000);
}
async function resolve2(val) {
  setTimeout(() => {
    console.log("resolve 2 executed");
  }, 2000);
}
async function resolve3(val) {
  setTimeout(() => {
    console.log("resolve 3 executed");
  }, 2000);
}
async function resolve4(val) {
  setTimeout(() => {
    console.log("resolve 4 executed");
  }, 2000);
}

resolve1()
  .then((data) => {
    resolve2()
      .then((data1) => {
        resolve3()
          .then((data2) => {
            resolve4()
              .then((data3) => {
                console.log("all get executed", data1);
              })
              .catch((error) => console.log({ error }));
          })
          .catch((error) => console.log({ error }));
      })
      .catch((error) => console.log({ error }));
  })
  .catch((error) => console.log({ error }));

const myPromise2 = new Promise([resolve1, resolve2, resolve3, resolve4]);

myPromise2
  .then((data) => {
    console.log(data);
  })
  .catch((error) => console.log({ error }));

const myPromise = new Promise((resolve, reject) => {
  setTimeout(() => {
    const randNum = Math.random(); //random number b/w 0 and 1
    if (randNum > 0.5) {
      resolve(randNum);
      //return randNum
    } else {
      reject("not a good random number!!");
      // throw new Error("not a good random number!!")
    }
  }, 3000);
});

myPromise
  .then((value) => {
    console.log("executed: ", value);
  })
  .catch((error) => {
    console.log(error);
  });
