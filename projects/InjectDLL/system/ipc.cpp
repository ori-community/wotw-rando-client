#define WIN32_LEAN_AND_MEAN

#include <ipc.h>

#include <csharp_bridge.h>
#include <Common/ext.h>
#include <Il2CppModLoader/common.h>

#include <windows.h>
#include <stdio.h> 
#include <tchar.h>
#include <strsafe.h>
#include <iostream>
#include <string>

using namespace modloader;

namespace ipc
{
    constexpr int BUFFER_SIZE = 64;

    bool connected = false;
    HANDLE pipe;
    OVERLAPPED overlapped;
    char* message;

    bool start_pipe()
    {
        if (connected)
        {
            warn("ipc", "Tried to start a new pipe when a pipe already exists.");
            return false;
        }

        overlapped = { 0 };
        HANDLE pipe = INVALID_HANDLE_VALUE;
        LPCTSTR pipe_name = TEXT("\\\\.\\pipe\\wotw_rando");
        pipe = CreateNamedPipe(
            pipe_name,
            PIPE_ACCESS_INBOUND | FILE_FLAG_OVERLAPPED,
            PIPE_TYPE_MESSAGE |
            PIPE_READMODE_MESSAGE |
            PIPE_WAIT,
            PIPE_UNLIMITED_INSTANCES,
            BUFFER_SIZE,
            BUFFER_SIZE,
            0,
            nullptr
        );

        connected = ConnectNamedPipe(pipe, &overlapped) ? true : (GetLastError() == ERROR_PIPE_CONNECTED);
        if (connected)
        {
            HANDLE heap = GetProcessHeap();
            message = (char*)HeapAlloc(heap, 0, BUFFER_SIZE * sizeof(char));
        }

        return true;
    }

    bool get_state()
    {
        if (connected)
            return false;

        switch (GetLastError())
        {
        case ERROR_IO_PENDING:
            return true;
        case ERROR_PIPE_CONNECTED:
            if (SetEvent(overlapped.hEvent))
                break;
        default:
            warn("ipc", "get_state() failure.");
            break;
        }

        return false;
    }

    void process_message(std::string request)
    {
        if (request == "reload")
            csharp_bridge::on_action_triggered(input::Action::Reload);
    }

    void handle_pipe()
    {
        bool message_received = ReadFile(pipe, message, BUFFER_SIZE, nullptr, &overlapped);
        if (!message_received)
        {
            DWORD bytes_read;
            message_received = GetOverlappedResult(pipe, &overlapped, &bytes_read, false);
            if (!message_received)
            {
                DWORD error = GetLastError();
                warn("ipc", format("GetOverlappedResult Error: %d", error));
                message_received = error != ERROR_IO_INCOMPLETE;
            }
        }

        if (message_received)
        {
            ResetEvent(overlapped.hEvent);
            process_message(message);
        }
    }

    void update_pipe()
    {
        if (get_state())
            handle_pipe();
    }
}
