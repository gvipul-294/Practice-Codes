//Example Code
const promiseObject = new Promise((resolve, reject) => {
  setTimeout(function() {
    console.log('hello! from resolve')
  }, 1000);
  console.log('outside of console')
});

promiseObject.then((response)=>{
  console.log(response);
  
}).then((res) => {
  console.log(red)
})




// Promise object for selecting a Strawberry Donut

const getDonuts = (flavour) => {
  return new Promise((resolve, reject) => {
    console.log(flavour, "flavour")
    if(flavour!=="strawberry"){
      reject("this is not a strawberry")
    }
    else{
      resolve("you selected strawberry")
    }
  })
}
