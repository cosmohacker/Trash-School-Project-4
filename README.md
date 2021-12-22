<style>
  body {
  margin: 0;
}

svg {
  max-width: 90%;
  height: 80vh;
  width: auto;
}

.section {
  height: 100vh;
  display: flex;
  justify-content: center;
  align-items: center;
  flex-wrap: wrap;
  background-color: #b7c4c8;
}

.ctn {
  width: 100%;
  text-align: center;
}

#timeout-text {
  font-family: "Press Start 2P", sans-serif;
  font-size: calc(2vw + 2vh);
}

@keyframes swing {
  100% {
    transform: rotate(-90deg);
  }
}

@keyframes spin {
  100% {
    transform: rotate(360deg);
  }
}

#face {
  animation: spin 2s linear infinite;
  transform-box: fill-box;
  transform-origin: center;
}

#pointer {
  visibility: hidden;
}

#arm {
  animation: swing 0.8s ease-in forwards;
  transform-box: fill-box;
  transform-origin: top center;
}

@keyframes blink {
  100% {
    opacity: 0;
  }
}

#loading-bar path {
  animation: blink 1s linear infinite;
}

#loading-bar path:nth-child(1) {
  animation-delay: 50ms;
}

#loading-bar path:nth-child(2) {
  animation-delay: 100ms;
}

#loading-bar path:nth-child(3) {
  animation-delay: 150ms;
}

#loading-bar path:nth-child(4) {
  animation-delay: 200ms;
}

#loading-bar path:nth-child(5) {
  animation-delay: 250ms;
}

#loading-bar path:nth-child(6) {
  animation-delay: 300ms;
}

@keyframes swap {
  0% {
    visibility: hidden;
  }

  50% {
    visibility: hidden;
  }
}

#loading-face {
  animation: swap 8s linear 5s infinite;
}

@keyframes reveal {
  100% {
    /* visibility: visible; */
    transform: scale(1);
  }
}

#server-text {
  /* visibility: hidden; */
  animation: reveal 0.5s linear 2s forwards;
  transform: scale(0);
  transform-box: fill-box;
  transform-origin: top left;
}
  </style

<div class="section">
  <div class="ctn">
    <svg xmlns:rdf="http://www.w3.org/1999/02/22-rdf-syntax-ns#" xmlns="http://www.w3.org/2000/svg" height="800" width="800" version="1.1" xmlns:cc="http://creativecommons.org/ns#" xmlns:xlink="http://www.w3.org/1999/xlink" viewBox="0 0 800 800.00001" xmlns:dc="http://purl.org/dc/elements/1.1/">
                <g transform="matrix(.79708 0 0 .79838 32.505 266.5)">
                    <g id="arm">
                        <g id="pointer" transform="matrix(0,1,-1,0,411.08,-136.64)">
                            <path stroke-linejoin="round" style="color-rendering:auto;color:#000000;isolation:auto;mix-blend-mode:normal;shape-rendering:auto;solid-color:#000000;image-rendering:auto"
                                d="m493.75 165.67v-2.5254h-15.152v-5.0507h-7.3236v-39.648h7.3236v-5.0508h5.0508v-5.0507h10.102v-5.0508h9.849v-5.0508h5.0508v-4.7982h9.849v9.5965h-5.0508v5.04l-4.9876 0.068-4.9877 0.069v5.0507l27.464 0.064 27.464 0.064v9.8467h-44.952v5.0508h19.95v9.849h-19.95v5.3033h14.9v9.5964h-19.951v5.3033h15.152v4.7982h-5.0507v5.0508h-24.748v-2.5254z"
                                stroke="#ffffff" stroke-width="1.2535" fill="#ffffff" />
                            <path d="m563.86 113.11h-5v10h5v-10zm-5 10h-45v5h20v10h5v-10h20v-5zm-25 15h-20v5h15v10h5v-15zm-5 15h-20v5h15v5h5v-10zm-5 10h-5v5h5v-5zm-5 5h-25v5h25v-5zm-25 0v-5h-15v5h15zm-15-5v-5h-10v-40h10v-5h5v-5h-10v5h-10v50h15zm5-55h10v-5h-10v5zm10-5h10v-5h-10v5zm10-5h5v-5h-5v5zm5-5h10v-5h-10v5zm10 0v10h5v-10h-5zm0 10h-5v5h-10v5h55v-5h-40v-5z"
                                style="color-rendering:auto;color:#000000;isolation:auto;mix-blend-mode:normal;shape-rendering:auto;solid-color:#000000;image-rendering:auto"
                                fill="#1a1a1a" />
                        </g>
                        <g id="fist" transform="matrix(0,1,-1,0,411.08,-136.64)">
                            <path stroke-linejoin="round" style="color-rendering:auto;color:#000000;isolation:auto;mix-blend-mode:normal;shape-rendering:auto;solid-color:#000000;image-rendering:auto"
                                d="m473.91 118.45h5v-5h5v-5h10v-5h10v-5h5v-5h9.5v9.5h-5v5h-10.052l0.1511 2.625 0.1511 2.625 12.375 0.1337 12.375 0.1337v9.4826h-15.052l0.1511 2.625 0.1511 2.625 9.875 0.1355 9.875 0.1356v9.4789h-20.052l0.1511 2.625 0.1511 2.625 7.375 0.1383 7.375 0.1384v9.4733h-20.052l0.1511 2.625 0.1511 2.625 7.375 0.1383 7.375 0.1384v4.4733h-5v5h-24.5v-5h-15v-5h-10v-39.5h5z"
                                stroke="#ffffff" stroke-width="1.2535" fill="#ffffff" />
                            <path d="m538.86 128.11h-5v10h5v-10zm-5 10h-20v5h15v10h5v-15zm-5 15h-20v5h15v5h5v-10zm-5 10h-5v5h5v-5zm-5 5h-25v5h25v-5zm-25 0v-5h-15v5h15zm-15-5v-5h-10v-40h10v-5h5v-5h-10v5h-10v50h15zm5-55h10v-5h-10v5zm10-5h10v-5h-10v5zm10-5h5v-5h-5v5zm5-5h10v-5h-10v5zm10 0v10h5v-10h-5zm0 10h-5v5h-10v5h25v-5h-10v-5zm10 10v10h-15v5h20v-15h-5z"
                                style="color-rendering:auto;color:#000000;isolation:auto;mix-blend-mode:normal;shape-rendering:auto;solid-color:#000000;image-rendering:auto"
                                fill="#1a1a1a" />
                        </g>
                        <g stroke-linejoin="round" transform="matrix(0,1,-1,0,411.08,-136.64)" stroke="#1a1a1a"
                            stroke-width="6.2676">
                            <rect id="sleeve" style="color-rendering:auto;color:#000000;isolation:auto;mix-blend-mode:normal;shape-rendering:auto;solid-color:#000000;image-rendering:auto"
                                transform="rotate(90)" height="195" width="55" y="-468.86" x="109.72" fill="#808080" />
                            <rect id="band" style="color-rendering:auto;color:#000000;isolation:auto;mix-blend-mode:normal;shape-rendering:auto;solid-color:#000000;image-rendering:auto"
                                height="55" width="20" y="109.81" x="432.2" fill="#a05a2c" />
                            <g id="face">
                                <circle id="case" style="color-rendering:auto;color:#000000;isolation:auto;mix-blend-mode:normal;shape-rendering:auto;solid-color:#000000;image-rendering:auto"
                                    cy="137.31" cx="442.33" r="20" fill="#ffffff" />
                                <path id="dial" style="color-rendering:auto;color:#000000;isolation:auto;mix-blend-mode:normal;shape-rendering:auto;solid-color:#000000;image-rendering:auto"
                                    d="m450.11 145.09a11.001 11.001 0 0 1 -11.988 2.3844 11.001 11.001 0 0 1 -6.7913 -10.164 11.001 11.001 0 0 1 6.7913 -10.164 11.001 11.001 0 0 1 11.988 2.3844"
                                    stroke-linecap="round" fill="none" />
                            </g>
                        </g>
                    </g>
                    <g stroke-linejoin="round" fill-rule="evenodd" stroke="#1a1a1a" stroke-width="6.2676">
                        <path d="m347.5 108.61v424.44l-160.18 91.962v-424.44z" fill="#808080" />
                        <path d="m187.32 200.57-184.82-106.11v424.44l184.82 106.11v-424.44" fill="#666666" />
                        <path d="m347.5 108.61-184.82-106.11-160.18 91.962 184.82 106.11 160.18-91.96" stroke-width="6.2678"
                            fill="#999999" />
                        <g id="a" stroke-linejoin="round" stroke-width="6.2676" stroke="#1a1a1a">
                            <g fill="#2aff80" fill-rule="evenodd">
                                <path d="m322.86 165.2v14.148l-12.322 7.0743v-14.148z" stroke-width="6.2676" />
                                <path d="m322.86 193.5v14.148l-12.322 7.0742v-14.148z" stroke-width="6.2676" />
                                <path d="m322.86 221.79v14.148l-12.322 7.0742v-14.148z" stroke-width="6.2676" />
                                <path d="m261.25 200.57v14.148l-12.322 7.0739v-14.148z" stroke-width="6.2676" />
                                <path d="m261.25 228.87v14.148l-12.322 7.0738v-14.148z" stroke-width="6.2676" />
                                <path d="m261.25 257.16v14.148l-12.322 7.0738v-14.148z" stroke-width="6.2676" />
                            </g>
                            <path d="m335.18 143.98v99.037l-135.54 77.814v-99.037z" stroke-width="6.2676" fill="none" />
                            <g fill="#333333" fill-rule="evenodd">
                                <path d="m236.61 271.31v14.148l-24.643 14.148v-14.148z" stroke-width="6.2676" />
                                <path d="m298.21 179.35v14.148l-24.643 14.148v-14.148z" stroke-width="6.2676" />
                                <path d="m298.21 207.65v14.148l-24.643 14.148v-14.148z" stroke-width="6.2676" />
                                <path d="m298.21 235.94v14.148l-24.643 14.148v-14.148z" stroke-width="6.2676" />
                                <path d="m236.61 214.72v14.148l-24.643 14.148v-14.148z" stroke-width="6.2676" />
                                <path d="m236.61 243.02v14.148l-24.643 14.148v-14.148z" stroke-width="6.2676" />
                            </g>
                        </g>
                    </g>
                    <use xlink:href="#a" transform="translate(-4.5832e-6,113.18)" height="100%" width="100%" y="0" x="0" />
                    <use xlink:href="#a" transform="translate(-4.5832e-6,226.37)" height="100%" width="100%" y="0" x="0" />
                    <g stroke-linejoin="round" fill-rule="evenodd" stroke="#1a1a1a" stroke-width="6.2676" fill="#ff5555">
                        <path d="m261.25 228.87v14.148l-12.322 7.0738v-14.148z" />
                        <path d="m261.25 342.05v14.148l-12.322 7.0738v-14.148z" />
                        <path d="m322.86 278.38v14.148l-12.322 7.0738v-14.148z" />
                        <path d="m322.86 419.87v14.148l-12.322 7.0738v-14.148z" />
                    </g>
                </g>
                <g fill-rule="evenodd" transform="matrix(.75933 0 0 .75983 497.63 26.367)">
                    <g stroke-width="1.3165" stroke="#6c5353">
                        <g stroke-linejoin="round" stroke-width="1.3165">
                            <g fill="#e3dedb">
                                <g stroke-width="6.5826">
                                    <path d="m2.5 239.9 168.77-97.44 184.12 106.3-168.77 97.44z" />
                                    <path d="m2.5 239.9v70.866l184.12 106.3v-70.866z" />
                                    <path d="m355.39 248.76-168.77 97.441v70.866l168.77-97.441z" />
                                </g>
                                <path d="m285.06 304.11v38.976l33.755-19.488v-38.976z" stroke-width="3.9496" />
                            </g>
                            <path d="m291.2 307.66c-4.1338 7.16-7.16 20.669 0 24.803 7.16 4.1339 17.346-5.2415 21.48-12.402 4.1339-7.1601 7.1601-20.669 0-24.803-7.1601-4.1339-17.346 5.2415-21.48 12.402z"
                                stroke-width="3.9496" fill="#c8beb7" />
                            <g stroke-width="3.9496" fill="#e3dedb">
                                <path d="m297.34 311.2c-1.7716 3.0686-3.0686 8.8582 0 10.63 3.0686 1.7717 7.4341-2.2463 9.2058-5.3149s3.0686-8.8583 0-10.63-7.4341 2.2464-9.2058 5.315z" />
                                <path d="m297.34 321.83-6.3872 10.408" />
                                <path d="m306.54 316.52 5.8872 3.3215" />
                                <path d="m306.54 305.89 5.8872-10.852" />
                                <path d="m297.34 311.2-6.3872-3.765" />
                            </g>
                        </g>
                        <g id="floppy-drive" fill-rule="evenodd" transform="translate(-157.44,-155.68)" stroke="#6c5353"
                            stroke-width="1.3165">
                            <g stroke-linejoin="round">
                                <path d="m181.42 425.69v38.976l61.372 35.433v-38.976z" stroke-width="3.9496" fill="#e3dedb" />
                                <path d="m184.49 445.18 21.48 12.402v3.5433l12.274 7.0866v-3.5433l21.48 12.402v-7.0866l-55.235-31.89z"
                                    stroke-width="3.2913" fill="#c8beb7" />
                                <path d="m190.62 452.27v3.5433l6.1372 3.5433v-3.5433z" stroke-width="2.633" fill="#afe9af" />
                            </g>
                            <g stroke-linejoin="round" stroke-width="1.3165" fill="#c8beb7">
                                <path d="m221.31 473.53v7.0867l6.1372 3.5433v-7.0866z" stroke-width="2.633" />
                                <path d="m221.31 473.53 3.0686-1.7717 6.1372 3.5434-3.0686 1.7716z" stroke-width="2.633" />
                                <path d="m227.45 484.16 3.0686-1.7716v-7.0866l-3.0686 1.7716z" stroke-width="2.633" />
                                <path d="m184.49 445.18 6.1372-3.5433-6.1372-3.5433z" stroke-width="3.2913" />
                                <path d="m205.97 457.58 6.1372-3.5433 3.0686 1.7717-9.2058 5.3149z" stroke-width="3.2913" />
                            </g>
                            <path d="m218.24 464.67 6.1372-3.5433" stroke-width="3.2913" fill="#e3dedb" />
                        </g>
                        <g stroke-width="6.5826" fill="#c8beb7">
                            <g stroke-linejoin="round">
                                <path d="m23.98 73.366v159.45l168.77 97.441v-159.45z" />
                                <path d="m223.44 153.09-30.686 17.716v159.45l30.686-17.716z" />
                                <path d="m23.98 73.366 168.77 97.444 30.69-17.72-168.77-97.44z" />
                            </g>
                            <path d="m33.186 99.941v116.93c0 2.0457 1.2969 4.2921 3.0686 5.315l144.22 83.268c1.0229 0.5905 3.0686-0.5906 3.0686-1.7717v-116.93c0-2.0457-1.2969-4.2921-3.0686-5.315l-144.22-83.274c-1.028-0.59-3.074 0.591-3.074 1.772z" />
                        </g>
                        <g stroke-linejoin="round">
                            <g stroke-width="6.5826" fill="#e3dedb">
                                <path d="m54.666 55.65 92.054-53.15 168.78 97.441-92.06 53.149z" />
                                <path d="m315.5 99.941h30.686l-168.77-97.441h-30.69z" />
                                <path d="m223.44 312.54 107.4-62.008v-42.52l15.343-19.488v-88.583h-30.686l-92.058 53.15z" />
                            </g>
                            <path d="m174.34 307.22v10.63l15.343 8.8582v-10.63z" stroke-width="3.9496" fill="#c8beb7" />
                            <path d="m162.07 301.91v3.5433l6.1372 3.5433v-3.5433z" stroke-width="2.633" fill="#ff5555" />
                            <g stroke-width="3.2913" fill="#c8beb7">
                                <path d="m290.95 149.55c-1.0229 0.5905-1.0229 4.1338 0 3.5433l15.343-8.8583c1.0229-0.5905 1.0229-4.1338 0-3.5433z" />
                                <path d="m312.43 137.15c-1.0229 0.5905-1.0229 4.1339 0 3.5433l15.343-8.8583c1.0229-0.5905 1.0229-4.1338 0-3.5433z" />
                                <path d="m291.5 158.03c-1.0229 0.5905-1.0229 4.1338 0 3.5433l15.343-8.8583c1.0229-0.5906 1.0229-4.1339 0-3.5433z" />
                                <path d="m312.98 145.63c-1.0229 0.5905-1.0229 4.1338 0 3.5433l15.343-8.8583c1.0229-0.5905 1.0229-4.1338 0-3.5433z" />
                                <path d="m290.73 167.33c-1.0229 0.5906-1.0229 4.1339 0 3.5434l15.343-8.8583c1.0229-0.5906 1.0229-4.1339 0-3.5433z" />
                                <path d="m312.21 154.93c-1.0229 0.5905-1.0229 4.1338 0 3.5433l15.343-8.8583c1.0229-0.5905 1.0229-4.1338 0-3.5433z" />
                                <path d="m291.28 175.81c-1.0229 0.5906-1.0229 4.1339 0 3.5433l15.343-8.8582c1.0229-0.5906 1.0229-4.1339 0-3.5433z" />
                                <path d="m312.76 163.41c-1.0229 0.5906-1.0229 4.1339 0 3.5434l15.343-8.8583c1.0229-0.5906 1.0229-4.1339 0-3.5433z" />
                                <path d="m290.73 185.05c-1.0229 0.5905-1.0229 4.1338 0 3.5433l15.343-8.8583c1.0229-0.5905 1.0229-4.1338 0-3.5433z" />
                                <path d="m312.21 172.64c-1.0229 0.5905-1.0229 4.1339 0 3.5433l15.343-8.8583c1.0229-0.5905 1.0229-4.1338 0-3.5433z" />
                                <path d="m291.28 193.53c-1.0229 0.5905-1.0229 4.1338 0 3.5433l15.343-8.8583c1.0229-0.5906 1.0229-4.1339 0-3.5433z" />
                                <path d="m312.76 181.13c-1.0229 0.5905-1.0229 4.1338 0 3.5433l15.343-8.8583c1.0229-0.5905 1.0229-4.1338 0-3.5433z" />
                            </g>
                        </g>
                    </g>
                    <g id="sad-face" transform="translate(-157.44,-155.68)">
                        <path stroke-linejoin="round" d="m209.03 262.7s-3.0686 19.488-3.0686 51.378 3.0686 51.378 3.0686 51.378l131.95 76.181v-99.213c0-2.0457-1.2969-4.2921-3.0686-5.315z"
                            stroke="#6c5353" stroke-width="6.5826" fill="#1a1a1a" />
                        <path d="m248.24 306.92v13.254l11.479 6.6262v-13.254l-11.479-6.6262zm39.025 22.53v13.254l11.479 6.6276v-13.254l-11.479-6.6276zm-36.73 13.412v13.254l11.479 6.6276 11.477 6.6261 11.479 6.6261 11.477 6.6276v-13.254l-11.477-6.6261-11.479-6.6276-11.477-6.6261-11.479-6.6276zm0 13.254-11.477-6.6261v13.254l11.477 6.6261v-13.254zm45.913 26.508v13.254l11.477 6.6261v-13.254l-11.477-6.6261z"
                            fill="#e9ddaf" />
                    </g>
                </g>
                <use xlink:href="#floppy-drive" transform="matrix(.75933 0 0 .75983 558.21 61.367)" height="100%" width="100%"
                    y="0" x="0" />
                <g id="loading-face" transform="matrix(.75933 0 0 .75983 497.63 26.36)">
                    <path stroke-linejoin="round" d="m51.598 107.03s-3.0686 19.488-3.0686 51.378 3.0686 51.378 3.0686 51.378l131.95 76.181v-99.213c0-2.0457-1.2969-4.2921-3.0686-5.315z"
                        fill-rule="evenodd" stroke="#6c5353" stroke-width="6.5826" fill="#1a1a1a" />
                    <path stroke-linejoin="round" d="m63.872 151.32v24.803l98.195 56.693v-24.803z" stroke="#e9ddaf"
                        stroke-width="3.2913" fill="none" />
                    <g id="loading-bar" fill="#e9ddaf" fill-rule="evenodd">
                        <path d="m66.94 156.63v17.717l9.2058 5.3149v-17.716z" />
                        <path d="m79.215 163.72v17.717l9.2058 5.3149v-17.716z" />
                        <path d="m91.489 170.81v17.717l9.2058 5.3149v-17.716z" />
                        <path d="m103.76 177.89v17.717l9.2058 5.3149v-17.716z" />
                        <path d="m116.04 184.98v17.717l9.2058 5.3149v-17.716z" />
                        <path d="m128.31 192.07v17.717l9.2058 5.3149v-17.716z" />
                    </g>
                </g>
                <g id="server-text">
                    <path id="text-bubble" stroke-linejoin="round" style="color-rendering:auto;color:#000000;isolation:auto;mix-blend-mode:normal;shape-rendering:auto;solid-color:#000000;image-rendering:auto"
                        d="m370.45 601.16h223.36v-150.24h-251.54l28.186 24.244z" stroke="#000000" stroke-linecap="round"
                        stroke-width="5" fill="#ffffff" />
                    <g fill="#000000">
                        <g transform="matrix(.61047 0 0 .60628 140.63 151.02)">
                            <path d="m414.74 578.65v-8.2487h8.2487v8.2487h-8.2487zm16.497 0v-8.2487h8.2487v8.2487h-8.2487zm-8.2487-8.2487v-16.497h8.2487v16.497h-8.2487zm-16.497 0v-41.254h8.2487v41.254h-8.2487zm32.995 0v-41.254h8.2588v41.254h-8.2588z" />
                            <path d="m455.97 578.65v-49.502h8.2487v16.508h16.497v-16.508h8.2487v49.502h-8.2487v-24.746h-16.497v24.746h-8.2487z" />
                            <path d="m497.22 578.65v-41.254h8.2487v16.508h16.497v-16.508h8.2487v41.254h-8.2487v-16.497h-16.497v16.497h-8.2487zm8.2487-41.254v-8.2487h16.497v8.2487h-16.497z" />
                            <path d="m554.97 578.65v-41.254h-16.497v-8.2487h41.254v8.2487h-16.508v41.254h-8.2487z" />
                            <path d="m587.95 545.66v-16.508h8.2487v16.508h-8.2487z" />
                            <path d="m604.46 578.65v-8.2487h24.746v-16.497h-24.746v-24.756h32.995v8.2487h-24.746v8.2588h24.746v32.995h-32.995z" />
                        </g>
                        <g transform="matrix(.61047 0 0 .60628 140.63 151.02)">
                            <path d="m422.99 646.22v-41.254h-16.497v-8.2487h41.254v8.2487h-16.508v41.254h-8.2487z" />
                            <path d="m455.97 646.22v-41.254h8.2487v16.508h16.497v-16.508h8.2487v41.254h-8.2487v-16.497h-16.497v16.497h-8.2487zm8.2487-41.254v-8.2487h16.497v8.2487h-16.497z" />
                            <path d="m521.97 646.22v-16.497h8.2487v16.497h-8.2487zm-8.2487-16.497v-8.2487h8.2487v8.2487h-8.2487zm0-16.497v-8.2588h8.2487v8.2588h-8.2487zm-16.497 32.995v-49.502h8.2487v16.508h8.2487v8.2487h-8.2487v24.746h-8.2487zm24.746-41.254v-8.2487h8.2487v8.2487h-8.2487z" />
                            <path d="m538.47 646.22v-49.502h8.2487v49.502h-8.2487z" />
                            <path d="m554.99 646.22v-49.502h8.2487v8.2487h8.2487v8.2588h-8.2487v32.995h-8.2487zm24.746 0v-24.746h-8.2487v-8.2487h8.2487v-16.508h8.2487v49.502h-8.2487z" />
                            <path d="m604.49 646.22v-8.2487h16.497v8.2487h-16.497zm16.497-8.2487v-16.497h-8.2487v-8.2487h16.497v24.746h-8.2487zm-24.746 0v-33.005h8.2487v33.005h-8.2487zm8.2487-33.005v-8.2487h24.746v8.2487h-24.746z" />
                        </g>
                        <g transform="matrix(.61047 0 0 .60628 140.63 151.02)">
                            <path d="m406.49 715.03v-8.2487h24.746v-16.497h-24.746v-24.756h32.995v8.2487h-24.746v8.2588h24.746v32.995h-32.995z" />
                            <path d="m456 715.03v-8.2487h16.497v8.2487h-16.497zm-8.2487-8.2487v-33.005h8.2487v33.005h-8.2487zm24.746 0v-33.005h8.2487v33.005h-8.2487zm-16.497-33.005v-8.2487h16.497v8.2487h-16.497z" />
                        </g>
                        <g transform="matrix(.61047 0 0 .60628 140.63 151.02)">
                            <path d="m514.6 715.03v-49.502h8.2487v41.254h24.746v8.2487h-32.995z" />
                            <path d="m564.1 715.03v-8.2487h16.497v8.2487h-16.497zm-8.2487-8.2487v-33.005h8.2487v33.005h-8.2487zm24.746 0v-33.005h8.2487v33.005h-8.2487zm-16.497-33.005v-8.2487h16.497v8.2487h-16.497z" />
                            <path d="m597.1 715.03v-49.502h8.2487v8.2487h8.2487v8.2588h-8.2487v32.995h-8.2487zm24.746 0v-24.746h-8.2487v-8.2487h8.2487v-16.508h8.2487v49.502h-8.2487z" />
                            <path d="m646.61 715.03v-8.2487h16.497v8.2487h-16.497zm16.497-8.2487v-16.497h-8.2487v-8.2487h16.497v24.746h-8.2487zm-24.746 0v-33.005h8.2487v33.005h-8.2487zm8.2487-33.005v-8.2487h24.746v8.2487h-24.746z" />
                            <path d="m696.11 715.03v-8.2487h8.2487v8.2487h-8.2487zm0-16.497v-8.2487h8.2487v8.2487h-8.2487zm8.2487-8.2487v-8.2487h8.2487v8.2487h-8.2487zm-24.746-8.2487v-8.2588h8.2487v8.2588h-8.2487zm32.995 0v-8.2588h8.2588v8.2588h-8.2588zm-24.746-8.2588v-8.2487h24.746v8.2487h-24.746z" />
                        </g>
                    </g>
                </g>
            </svg>
  </div>
  <div id="timeout-text" class="ctn">
    408 TIMEOUT
  </div>
</div>
