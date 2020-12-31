# `hello_world`

This is a Reason library.

## Template Init

After copying this template a convenience script is included to update all
appropriate filenames and contents for a new library name.

- The script accepts two arguments: old_name, new_name
- The arguments should be in snake_case, they are converted to TitleCase within
  the script when required.

```bash
scripts/rename hello_world my_library
```

- Remove this section from the readme after completing the rename.

## Install `esy`

Globally install [`esy`](https://www.npmjs.com/package/esy) so that the `esy`
command is available in the terminal.

```bash
npm install -g esy
```

_This may be useful: [Global npm without sudo](https://github.com/sindresorhus/guides/blob/master/npm-global-without-sudo.md)_

## Install the dependencies and build

```bash
esy
```

_This is a combination of `esy install` and `esy build`_

## Run tests for `HelloWorld.re`

```bash
esy test
```

_This should automatically rebuild if there are changes_

## More Details

- For more details and additional setup see: [`details.md`](details.md)
  - Editor support
  - Adding dependencies
  - Recursive dub-directories
  - Ignoring warnings
  - Printing stack traces

## Next Steps

For CI/CD, check out [`esy-ocaml/hello-reason`](https://github.com/esy-ocaml/hello-reason).
