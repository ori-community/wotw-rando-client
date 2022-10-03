#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Threading::Tasks::TaskExceptionHolder {
    IL2CPP_REGISTER_METHOD(0x0233C210, void, ctor, (app::TaskExceptionHolder * this_ptr, app::Task* task))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldFailFastOnUnobservedException, ())
    IL2CPP_REGISTER_METHOD(0x0233C2C0, void, EnsureADUnloadCallbackRegistered, ())
    IL2CPP_REGISTER_METHOD(0x0233C5C0, void, AppDomainUnloadCallback, (app::Object * sender, app::EventArgs* e))
    IL2CPP_REGISTER_METHODINFO(0x0473EC98, TaskExceptionHolder_AppDomainUnloadCallback__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0233C660, void, Finalize, (app::TaskExceptionHolder * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047120E0, TaskExceptionHolder_Finalize__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0233CE60, bool, get_ContainsFaultList, (app::TaskExceptionHolder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0233CE70, void, Add, (app::TaskExceptionHolder * this_ptr, app::Object* exception_object, bool represents_cancellation))
    IL2CPP_REGISTER_METHOD(0x0233CF80, void, SetCancellationException, (app::TaskExceptionHolder * this_ptr, app::Object* exception_object))
    IL2CPP_REGISTER_METHOD(0x0233D070, void, AddFaultException, (app::TaskExceptionHolder * this_ptr, app::Object* exception_object))
    IL2CPP_REGISTER_METHODINFO(0x047916E8, TaskExceptionHolder_AddFaultException__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0233D5A0, void, MarkAsUnhandled, (app::TaskExceptionHolder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0233D790, void, MarkAsHandled, (app::TaskExceptionHolder * this_ptr, bool called_from_finalizer))
    IL2CPP_REGISTER_METHOD(0x0233D860, app::AggregateException*, CreateExceptionObject, (app::TaskExceptionHolder * this_ptr, bool called_from_finalizer, app::Exception* include_this_exception))
    IL2CPP_REGISTER_METHOD(0x0233DCC0, app::ReadOnlyCollection_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo_*, GetExceptionDispatchInfos, (app::TaskExceptionHolder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::ExceptionDispatchInfo*, GetCancellationExceptionDispatchInfo, (app::TaskExceptionHolder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0233DE30, void, cctor, ())
} // namespace app::classes::System::Threading::Tasks::TaskExceptionHolder
