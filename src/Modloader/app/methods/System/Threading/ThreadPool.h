#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerable_1_System_Threading_IThreadPoolWorkItem_.h>
#include <Modloader/app/structs/IThreadPoolWorkItem.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RegisteredWaitHandle.h>
#include <Modloader/app/structs/StackCrawlMark__Enum.h>
#include <Modloader/app/structs/ThreadPoolWorkQueue_QueueSegment.h>
#include <Modloader/app/structs/ThreadPoolWorkQueue_WorkStealingQueue__Array.h>
#include <Modloader/app/structs/TimeSpan.h>
#include <Modloader/app/structs/WaitCallback.h>
#include <Modloader/app/structs/WaitHandle.h>
#include <Modloader/app/structs/WaitOrTimerCallback.h>

namespace app::classes::System::Threading::ThreadPool {
    IL2CPP_REGISTER_METHOD(0x023449C0, void, GetAvailableThreads, int32_t* worker_threads, int32_t* completion_port_threads)
    IL2CPP_REGISTER_METHOD(
        0x023449D0,
        app::RegisteredWaitHandle*,
        RegisterWaitForSingleObject_1,
        app::WaitHandle* wait_object,
        app::WaitOrTimerCallback* call_back,
        app::Object* state,
        uint32_t milliseconds_time_out_interval,
        bool execute_only_once,
        app::StackCrawlMark__Enum* stack_mark,
        bool compress_stack
    )
    IL2CPP_REGISTER_METHOD(
        0x02344F20,
        app::RegisteredWaitHandle*,
        RegisterWaitForSingleObject_2,
        app::WaitHandle* wait_object,
        app::WaitOrTimerCallback* call_back,
        app::Object* state,
        int32_t milliseconds_time_out_interval,
        bool execute_only_once
    )
    IL2CPP_REGISTER_METHOD(
        0x02345040,
        app::RegisteredWaitHandle*,
        RegisterWaitForSingleObject_3,
        app::WaitHandle* wait_object,
        app::WaitOrTimerCallback* call_back,
        app::Object* state,
        app::TimeSpan timeout,
        bool execute_only_once
    )
    IL2CPP_REGISTER_METHOD(0x023451E0, bool, QueueUserWorkItem_1, app::WaitCallback* call_back, app::Object* state)
    IL2CPP_REGISTER_METHOD(0x02345210, bool, QueueUserWorkItem_2, app::WaitCallback* call_back)
    IL2CPP_REGISTER_METHOD(0x02345240, bool, UnsafeQueueUserWorkItem, app::WaitCallback* call_back, app::Object* state)
    IL2CPP_REGISTER_METHOD(
        0x02345270,
        bool,
        QueueUserWorkItemHelper,
        app::WaitCallback* call_back,
        app::Object* state,
        app::StackCrawlMark__Enum* stack_mark,
        bool compress_stack
    )
    IL2CPP_REGISTER_METHOD(0x02345550, void, UnsafeQueueCustomWorkItem, app::IThreadPoolWorkItem* work_item, bool force_global)
    IL2CPP_REGISTER_METHOD(0x02345650, bool, TryPopCustomWorkItem, app::IThreadPoolWorkItem* work_item)
    IL2CPP_REGISTER_METHOD(0x02345810, app::IEnumerable_1_System_Threading_IThreadPoolWorkItem_*, GetQueuedWorkItems, )
    IL2CPP_REGISTER_METHOD(
        0x02345920,
        app::IEnumerable_1_System_Threading_IThreadPoolWorkItem_*,
        EnumerateQueuedWorkItems,
        app::ThreadPoolWorkQueue_WorkStealingQueue__Array* ws_queues,
        app::ThreadPoolWorkQueue_QueueSegment* global_queue_tail
    )
    IL2CPP_REGISTER_METHOD(0x02345AC0, bool, RequestWorkerThread, )
    IL2CPP_REGISTER_METHOD(0x02345AF0, void, EnsureVMInitialized, )
    IL2CPP_REGISTER_METHOD(0x023449C0, void, GetAvailableThreadsNative, int32_t* worker_threads, int32_t* completion_port_threads)
    IL2CPP_REGISTER_METHOD(0x02345DF0, bool, NotifyWorkItemComplete, )
    IL2CPP_REGISTER_METHOD(0x0173D7D0, void, ReportThreadStatus, bool is_working)
    IL2CPP_REGISTER_METHOD(0x02345E70, void, NotifyWorkItemProgress, )
    IL2CPP_REGISTER_METHOD(0x023461E0, void, NotifyWorkItemProgressNative, )
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsThreadPoolHosted, )
    IL2CPP_REGISTER_METHOD(0x02346270, void, InitializeVMTp, bool* enable_worker_tracking)
} // namespace app::classes::System::Threading::ThreadPool
