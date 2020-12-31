open TestFramework;

describe("HelloWorld", ({test}) => {
  test("Strings", ({expect}) => {
    let actual = HelloWorld.hello;
    let expected = "Hello World!";
    expect.string(actual).toEqual(expected);
  });

  test("Snapshots", ({expect}) => {
    let actual = HelloWorld.hello;
    expect.string(actual).toMatchSnapshot();
  });
});
