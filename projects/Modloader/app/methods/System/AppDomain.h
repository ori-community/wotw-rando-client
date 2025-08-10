#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AppDomain.h>
#include <Modloader/app/structs/AppDomainSetup.h>
#include <Modloader/app/structs/Assembly.h>
#include <Modloader/app/structs/AssemblyLoadEventHandler.h>
#include <Modloader/app/structs/AssemblyName.h>
#include <Modloader/app/structs/Assembly__Array.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CADMethodCallMessage.h>
#include <Modloader/app/structs/CADMethodReturnMessage.h>
#include <Modloader/app/structs/Context.h>
#include <Modloader/app/structs/EventHandler.h>
#include <Modloader/app/structs/Evidence.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UnhandledExceptionEventHandler.h>

namespace app::classes::System::AppDomain {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::AppDomain* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0228CC40, app::AppDomainSetup*, getSetup, app::AppDomain* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0228CC50, app::AppDomainSetup*, get_SetupInformation, app::AppDomain* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0228CE60, app::String*, getFriendlyName, app::AppDomain* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0228CE80, app::AppDomain*, getCurDomain, )
    IL2CPP_REGISTER_METHOD(0x0228CE80, app::AppDomain*, get_CurrentDomain, )
    IL2CPP_REGISTER_METHOD(0x0228CF90, app::Assembly__Array*, GetAssemblies_1, app::AppDomain* this_ptr, bool ref_only)
    IL2CPP_REGISTER_METHOD(0x0228CF90, app::Assembly__Array*, GetAssemblies_2, app::AppDomain* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0228D040, app::Object*, GetData, app::AppDomain* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::Object*, InitializeLifetimeService, app::AppDomain* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0228D170,
        app::Assembly*,
        LoadAssembly,
        app::AppDomain* this_ptr,
        app::String* assembly_ref,
        app::Evidence* security_evidence,
        bool ref_only
    )
    IL2CPP_REGISTER_METHOD(0x0228D3A0, app::Assembly*, LoadSatellite, app::AppDomain* this_ptr, app::AssemblyName* assembly_ref, bool throw_on_error)
    IL2CPP_REGISTER_METHOD(0x0228D510, app::Assembly*, Load_1, app::AppDomain* this_ptr, app::String* assembly_string)
    IL2CPP_REGISTER_METHOD(
        0x0228D680,
        app::Assembly*,
        Load_2,
        app::AppDomain* this_ptr,
        app::String* assembly_string,
        app::Evidence* assembly_security,
        bool refonly
    )
    IL2CPP_REGISTER_METHOD(0x0228D810, app::AppDomain*, InternalSetDomainByID, int32_t domain_id)
    IL2CPP_REGISTER_METHOD(0x0228D820, app::AppDomain*, InternalSetDomain, app::AppDomain* context)
    IL2CPP_REGISTER_METHOD(0x0228D830, void, InternalPushDomainRefByID, int32_t domain_id)
    IL2CPP_REGISTER_METHOD(0x0228D840, void, InternalPopDomainRef, )
    IL2CPP_REGISTER_METHOD(0x0228D850, app::Context*, InternalSetContext, app::Context* context)
    IL2CPP_REGISTER_METHOD(0x0228D860, app::Context*, InternalGetContext, )
    IL2CPP_REGISTER_METHOD(0x0228D860, app::Context*, InternalGetDefaultContext, )
    IL2CPP_REGISTER_METHOD(0x0228D8A0, app::String*, InternalGetProcessGuid, app::String* newguid)
    IL2CPP_REGISTER_METHOD(
        0x0228D8B0,
        app::Object*,
        InvokeInDomainByID,
        int32_t domain_id,
        app::MethodInfo_1* method_1,
        app::Object* obj,
        app::Object__Array* args
    )
    IL2CPP_REGISTER_METHOD(0x0228D920, app::String*, GetProcessGuid, )
    IL2CPP_REGISTER_METHOD(0x00417870, bool, InternalIsFinalizingForUnload, int32_t domain_id)
    IL2CPP_REGISTER_METHOD(0x0228D9F0, bool, IsFinalizingForUnload, app::AppDomain* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0228DA20, int32_t, getDomainID, app::AppDomain* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0228DA50, int32_t, GetCurrentThreadId, )
    IL2CPP_REGISTER_METHOD(0x0228CE60, app::String*, ToString, app::AppDomain* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0228DA80, void, DoAssemblyLoad, app::AppDomain* this_ptr, app::Assembly* assembly)
    IL2CPP_REGISTER_METHOD(
        0x0228DC70,
        app::Assembly*,
        DoAssemblyResolve,
        app::AppDomain* this_ptr,
        app::String* name,
        app::Assembly* requesting_assembly,
        bool refonly
    )
    IL2CPP_REGISTER_METHOD(0x0228E2A0, app::Assembly*, DoTypeResolve, app::AppDomain* this_ptr, app::Object* name_or_tb)
    IL2CPP_REGISTER_METHOD(0x0228E800, app::Assembly*, DoResourceResolve, app::AppDomain* this_ptr, app::String* name, app::Assembly* requesting)
    IL2CPP_REGISTER_METHOD(0x0228EA50, void, DoDomainUnload, app::AppDomain* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0228EA70, app::Byte__Array*, GetMarshalledDomainObjRef, app::AppDomain* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0228EC30,
        void,
        ProcessMessageInDomain,
        app::AppDomain* this_ptr,
        app::Byte__Array* arr_request,
        app::CADMethodCallMessage* cad_msg,
        app::Byte__Array** arr_response,
        app::CADMethodReturnMessage** cad_mrm
    )
    IL2CPP_REGISTER_METHOD(0x0228F070, void, add_AssemblyLoad, app::AppDomain* this_ptr, app::AssemblyLoadEventHandler* value)
    IL2CPP_REGISTER_METHOD(0x0228F160, void, remove_AssemblyLoad, app::AppDomain* this_ptr, app::AssemblyLoadEventHandler* value)
    IL2CPP_REGISTER_METHOD(0x0228F250, void, add_DomainUnload, app::AppDomain* this_ptr, app::EventHandler* value)
    IL2CPP_REGISTER_METHOD(0x0228F340, void, remove_DomainUnload, app::AppDomain* this_ptr, app::EventHandler* value)
    IL2CPP_REGISTER_METHOD(0x0228F430, void, add_ProcessExit, app::AppDomain* this_ptr, app::EventHandler* value)
    IL2CPP_REGISTER_METHOD(0x0228F520, void, remove_ProcessExit, app::AppDomain* this_ptr, app::EventHandler* value)
    IL2CPP_REGISTER_METHOD(0x0228F610, void, add_UnhandledException, app::AppDomain* this_ptr, app::UnhandledExceptionEventHandler* value)
    IL2CPP_REGISTER_METHOD(0x0228F700, void, remove_UnhandledException, app::AppDomain* this_ptr, app::UnhandledExceptionEventHandler* value)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsHomogenous, app::AppDomain* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsFullyTrusted, app::AppDomain* this_ptr)
} // namespace app::classes::System::AppDomain
