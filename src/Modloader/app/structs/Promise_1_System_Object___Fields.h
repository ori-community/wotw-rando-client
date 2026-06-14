#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Promise_1_System_Object___Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Promise_1_System_Object___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Promise_1_System_Object___Fields_DEFINED)
#include <Modloader/app/structs/PromiseState__Enum.h>
#if defined(IL2CPP_STRUCT_PromiseState__Enum_DEFINED)
#define IL2CPP_STRUCT_Promise_1_System_Object___Fields_DEFINED
struct Exception;
struct Object;
struct List_1_ZenFulcrum_EmbeddedBrowser_RejectHandler_;
struct List_1_System_Action_1__4;
struct List_1_ZenFulcrum_EmbeddedBrowser_IRejectable_;
struct String;
struct __declspec(align(8)) Promise_1_System_Object___Fields {
    struct Exception* rejectionException;
    struct Object* resolveValue;
    struct List_1_ZenFulcrum_EmbeddedBrowser_RejectHandler_* rejectHandlers;
    struct List_1_System_Action_1__4* resolveCallbacks;
    struct List_1_ZenFulcrum_EmbeddedBrowser_IRejectable_* resolveRejectables;
    int32_t _Id_k__BackingField;
    struct String* _Name_k__BackingField;
    PromiseState__Enum _CurState_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Promise_1_System_Object___Fields_FWDDECL)
#define IL2CPP_STRUCT_Promise_1_System_Object___Fields_FWDDECL
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/List_1_System_Action_1__4.h>
#include <Modloader/app/structs/List_1_ZenFulcrum_EmbeddedBrowser_IRejectable_.h>
#include <Modloader/app/structs/List_1_ZenFulcrum_EmbeddedBrowser_RejectHandler_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_Promise_1_System_Object___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Promise_1_System_Object___Fields_DEFINED) && !defined(IL2CPP_STRUCT_Promise_1_System_Object___Fields_FWDDECL)
#include <Modloader/app/structs/Promise_1_System_Object___Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Promise_1_System_Object___Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
