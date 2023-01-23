#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UserControlAI_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UserControlAI_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserControlAI_DEFINED)
#include <Modloader/app/structs/UserControlAI__Fields.h>
#if defined(IL2CPP_STRUCT_UserControlAI__Fields_DEFINED)
#define IL2CPP_STRUCT_UserControlAI_DEFINED
struct UserControlAI__Class;
struct UserControlAI {
    struct UserControlAI__Class* klass;
    MonitorData* monitor;
    struct UserControlAI__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UserControlAI_FWDDECL)
#define IL2CPP_STRUCT_UserControlAI_FWDDECL
#include <Modloader/app/structs/UserControlAI__Class.h>
#endif
#undef IL2CPP_STRUCT_UserControlAI_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserControlAI_DEFINED) && !defined(IL2CPP_STRUCT_UserControlAI_FWDDECL)
#include <Modloader/app/structs/UserControlAI.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UserControlAI.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
