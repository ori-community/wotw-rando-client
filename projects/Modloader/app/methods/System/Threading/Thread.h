#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncLocalValueChangedArgs_1_System_Globalization_CultureInfo_.h>
#include <Modloader/app/structs/Context.h>
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/Delegate.h>
#include <Modloader/app/structs/ExecutionContext.h>
#include <Modloader/app/structs/ExecutionContext_Reader.h>
#include <Modloader/app/structs/IPrincipal.h>
#include <Modloader/app/structs/InternalThread.h>
#include <Modloader/app/structs/MulticastDelegate.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ParameterizedThreadStart.h>
#include <Modloader/app/structs/StackCrawlMark__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Thread.h>
#include <Modloader/app/structs/ThreadPriority__Enum.h>
#include <Modloader/app/structs/ThreadStart.h>
#include <Modloader/app/structs/ThreadState__Enum.h>

namespace app::classes::System::Threading::Thread {
    IL2CPP_REGISTER_METHOD(0x023417A0, void, AsyncLocalSetCurrentCulture, app::AsyncLocalValueChangedArgs_1_System_Globalization_CultureInfo_ args)
    IL2CPP_REGISTER_METHOD(0x02341860, void, AsyncLocalSetCurrentUICulture, app::AsyncLocalValueChangedArgs_1_System_Globalization_CultureInfo_ args)
    IL2CPP_REGISTER_METHOD(0x02341920, void, ctor_1, app::Thread* this_ptr, app::ThreadStart* start)
    IL2CPP_REGISTER_METHOD(0x023419F0, void, ctor_2, app::Thread* this_ptr, app::ParameterizedThreadStart* start)
    IL2CPP_REGISTER_METHOD(0x02341AC0, void, Start_1, app::Thread* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02341AE0, void, Start_2, app::Thread* this_ptr, app::Object* parameter)
    IL2CPP_REGISTER_METHOD(0x02341BE0, void, Start_3, app::Thread* this_ptr, app::StackCrawlMark__Enum* stack_mark)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::ExecutionContext_Reader, GetExecutionContextReader, app::Thread* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02341DF0, bool, get_ExecutionContextBelongsToCurrentScope, app::Thread* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02341E00, void, set_ExecutionContextBelongsToCurrentScope, app::Thread* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x02341E10, app::ExecutionContext*, GetMutableExecutionContext, app::Thread* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02341F80, void, SetExecutionContext_1, app::Thread* this_ptr, app::ExecutionContext* value, bool belongs_to_current_scope)
    IL2CPP_REGISTER_METHOD(0x02341F80, void, SetExecutionContext_2, app::Thread* this_ptr, app::ExecutionContext_Reader value, bool belongs_to_current_scope)
    IL2CPP_REGISTER_METHOD(0x02341F90, void, Interrupt, app::Thread* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02341F90, void, InterruptInternal, app::Thread* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02341FA0, void, set_Priority, app::Thread* this_ptr, app::ThreadPriority__Enum value)
    IL2CPP_REGISTER_METHOD(0x02341FA0, void, SetPriorityNative, app::Thread* this_ptr, int32_t priority)
    IL2CPP_REGISTER_METHOD(0x02341FB0, bool, JoinInternal, app::Thread* this_ptr, int32_t milliseconds_timeout)
    IL2CPP_REGISTER_METHOD(0x023420B0, void, Join_1, app::Thread* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02342180, bool, Join_2, app::Thread* this_ptr, int32_t milliseconds_timeout)
    IL2CPP_REGISTER_METHOD(0x02342320, void, SleepInternal, int32_t milliseconds_timeout)
    IL2CPP_REGISTER_METHOD(0x023423E0, void, Sleep, int32_t milliseconds_timeout)
    IL2CPP_REGISTER_METHOD(0x02342540, bool, YieldInternal, )
    IL2CPP_REGISTER_METHOD(0x02342540, bool, Yield, )
    IL2CPP_REGISTER_METHOD(0x02342560, void, SetStartHelper, app::Thread* this_ptr, app::Delegate* start, int32_t max_stack_size)
    IL2CPP_REGISTER_METHOD(0x02342990, app::CultureInfo*, get_CurrentUICulture, app::Thread* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023429A0, void, set_CurrentUICulture, app::Thread* this_ptr, app::CultureInfo* value)
    IL2CPP_REGISTER_METHOD(0x02342E20, app::CultureInfo*, GetCurrentUICultureNoAppX, app::Thread* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02343090, app::CultureInfo*, get_CurrentCulture, app::Thread* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023430A0, void, set_CurrentCulture, app::Thread* this_ptr, app::CultureInfo* value)
    IL2CPP_REGISTER_METHOD(0x02343450, app::CultureInfo*, GetCurrentCultureNoAppX, app::Thread* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023436C0, void, nativeInitCultureAccessors, )
    IL2CPP_REGISTER_METHOD(0x023437F0, void, MemoryBarrier, )
    IL2CPP_REGISTER_METHOD(0x02343800, void, ConstructInternalThread, app::Thread* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02343810, app::InternalThread*, get_Internal, app::Thread* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0228D860, app::Context*, get_CurrentContext, )
    IL2CPP_REGISTER_METHOD(0x02343840, app::Thread*, GetCurrentThread, )
    IL2CPP_REGISTER_METHOD(0x02343870, app::Thread*, get_CurrentThread, )
    IL2CPP_REGISTER_METHOD(0x0228DA50, int32_t, get_CurrentThreadId, )
    IL2CPP_REGISTER_METHOD(0x0228DA20, int32_t, GetDomainID, )
    IL2CPP_REGISTER_METHOD(0x02343950, void*, Thread_internal, app::Thread* this_ptr, app::MulticastDelegate* start)
    IL2CPP_REGISTER_METHOD(0x02329BB0, void, Finalize, app::Thread* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02343960, bool, get_IsThreadPoolThread, app::Thread* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02343960, bool, get_IsThreadPoolThreadInternal, app::Thread* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023439A0, bool, get_IsAlive, app::Thread* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02343A00, void, set_IsBackground, app::Thread* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x02343B60, void, SetName_internal, app::InternalThread* thread, app::String* name)
    IL2CPP_REGISTER_METHOD(0x02343C80, void, set_Name, app::Thread* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x02343DB0, app::ThreadState__Enum, get_ThreadState, app::Thread* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02343E10, void, Abort_internal, app::InternalThread* thread, app::Object* state_info)
    IL2CPP_REGISTER_METHOD(0x02343E20, void, Abort, app::Thread* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SpinWait_nop, )
    IL2CPP_REGISTER_METHOD(0x02343E50, void, SpinWait, int32_t iterations)
    IL2CPP_REGISTER_METHOD(0x02343E60, void, StartInternal, app::Thread* this_ptr, app::IPrincipal* principal, app::StackCrawlMark__Enum* stack_mark)
    IL2CPP_REGISTER_METHOD(0x02343F20, void, SetState, app::InternalThread* thread, app::ThreadState__Enum set)
    IL2CPP_REGISTER_METHOD(0x02343F70, void, ClrState, app::InternalThread* thread, app::ThreadState__Enum clr)
    IL2CPP_REGISTER_METHOD(0x02343FC0, app::ThreadState__Enum, GetState, app::InternalThread* thread)
    IL2CPP_REGISTER_METHOD(0x0215A2D0, int32_t, SystemMaxStackStize, )
    IL2CPP_REGISTER_METHOD(0x02344010, int32_t, GetProcessDefaultStackSize, int32_t max_stack_size)
    IL2CPP_REGISTER_METHOD(0x023440F0, void, SetStart, app::Thread* this_ptr, app::MulticastDelegate* start, int32_t max_stack_size)
    IL2CPP_REGISTER_METHOD(0x02344140, int32_t, get_ManagedThreadId, app::Thread* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02344180, void, BeginCriticalRegion, )
    IL2CPP_REGISTER_METHOD(0x023441E0, void, EndCriticalRegion, )
    IL2CPP_REGISTER_METHOD(0x02344140, int32_t, GetHashCode, app::Thread* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02344240, app::ThreadState__Enum, ValidateThreadState, app::Thread* this_ptr)
} // namespace app::classes::System::Threading::Thread
