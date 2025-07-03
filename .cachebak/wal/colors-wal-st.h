const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#050611", /* black   */
  [1] = "#1766AC", /* red     */
  [2] = "#358CBA", /* green   */
  [3] = "#07B7DB", /* yellow  */
  [4] = "#23A0D4", /* blue    */
  [5] = "#56AED8", /* magenta */
  [6] = "#5DC3DC", /* cyan    */
  [7] = "#cadce5", /* white   */

  /* 8 bright colors */
  [8]  = "#8d9aa0",  /* black   */
  [9]  = "#1766AC",  /* red     */
  [10] = "#358CBA", /* green   */
  [11] = "#07B7DB", /* yellow  */
  [12] = "#23A0D4", /* blue    */
  [13] = "#56AED8", /* magenta */
  [14] = "#5DC3DC", /* cyan    */
  [15] = "#cadce5", /* white   */

  /* special colors */
  [256] = "#050611", /* background */
  [257] = "#cadce5", /* foreground */
  [258] = "#cadce5",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
