<h1> FTP Server</h1>
<p>This is a simple implementation of FTP-Server using socket programming.</p><br>
<h3>1)How to run?</h3>
<p>Open code directory and then type these codes in terminal :</p>
<div class="snippet-clipboard-content notranslate position-relative overflow-auto"><pre class="notranslate"><code>$ make
$ ./ftp.out
</code></pre> <div class="zeroclipboard-container position-absolute right-0 top-0">
    <clipboard-copy aria-label="Copy" class="ClipboardButton btn js-clipboard-copy m-2 p-0 tooltipped-no-delay" data-copy-feedback="Copied!" data-tooltip-direction="w" value="make" tabindex="0" role="button" style="display: inherit;">
      <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-copy js-clipboard-copy-icon m-2">
    <path fill-rule="evenodd" d="M0 6.75C0 5.784.784 5 1.75 5h1.5a.75.75 0 010 1.5h-1.5a.25.25 0 00-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 00.25-.25v-1.5a.75.75 0 011.5 0v1.5A1.75 1.75 0 019.25 16h-7.5A1.75 1.75 0 010 14.25v-7.5z"></path><path fill-rule="evenodd" d="M5 1.75C5 .784 5.784 0 6.75 0h7.5C15.216 0 16 .784 16 1.75v7.5A1.75 1.75 0 0114.25 11h-7.5A1.75 1.75 0 015 9.25v-7.5zm1.75-.25a.25.25 0 00-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 00.25-.25v-7.5a.25.25 0 00-.25-.25h-7.5z"></path>
</svg>
      <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-check js-clipboard-check-icon color-fg-success d-none m-2">
    <path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path>
</svg>
    </clipboard-copy>
  </div></div>
  <p>Open client folder. In this folder, open a new terminal and type:</p>
  <div class="snippet-clipboard-content notranslate position-relative overflow-auto"><pre class="notranslate"><code>$ make
  $ ./client.out </code></pre> <div class="zeroclipboard-container position-absolute right-0 top-0">
    <clipboard-copy aria-label="Copy" class="ClipboardButton btn js-clipboard-copy m-2 p-0 tooltipped-no-delay" data-copy-feedback="Copied!" data-tooltip-direction="w" value="make" tabindex="0" role="button" style="display: inherit;">
      <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-copy js-clipboard-copy-icon m-2">
    <path fill-rule="evenodd" d="M0 6.75C0 5.784.784 5 1.75 5h1.5a.75.75 0 010 1.5h-1.5a.25.25 0 00-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 00.25-.25v-1.5a.75.75 0 011.5 0v1.5A1.75 1.75 0 019.25 16h-7.5A1.75 1.75 0 010 14.25v-7.5z"></path><path fill-rule="evenodd" d="M5 1.75C5 .784 5.784 0 6.75 0h7.5C15.216 0 16 .784 16 1.75v7.5A1.75 1.75 0 0114.25 11h-7.5A1.75 1.75 0 015 9.25v-7.5zm1.75-.25a.25.25 0 00-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 00.25-.25v-7.5a.25.25 0 00-.25-.25h-7.5z"></path>
</svg>
      <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-check js-clipboard-check-icon color-fg-success d-none m-2">
    <path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path>
</svg>
    </clipboard-copy>
  </div></div>
  
  <h5>Now you should enter the commands in clients terminal</h5>
  <sub>(config.json file is an example of 2 client for our server.)</sub><br><br>
  <hr>
  <h3>2)Commands</h3>
      <ul dir="auto">
        <li>
            <h4>Authentication commands: </h4>
            <ul> 
                <li><code>user &lt;username&gt;</code> to enter client's username in order to login</li>
                <li><code>pass &lt;password&gt;</code> to enter password for entered username</li>
            </ul>
        </li>
        <li>
            <h4>Commands</h4>
            <ul>
                <li><code>pwd</code>: shows current directory</li>
                <li><code>mkd &lt;directory path/file&gt;</code>: makes new directory or file</li>
                <li><code>dele -f &lt;file name&gt;</code>: deletes a file</li>
                <li><code>dele -d &lt;directroy path&gt;</code>: deletes a directory</li>
                <li><code>ls</code>: shows files in current directory</li>
                <li><code>cwd &lt;path&gt;</code>: changes directory</li>
                <li><code>rename &lt;last name&gt; &lt;new name&gt;</code>: changes file name in current directory</li>
                <li><code>retr &lt;filename&gt;</code>: downloads a file in FTP DOWNLOADS (./client/FTP DOWNLOADS)</li>
                <li><code>help</code>: for getting commands help</li>
                <li><code>quit</code>: to sign out</li>  
            </ul>
        </li>  
    </ul>

  
  
