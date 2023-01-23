#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WWWForm_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WWWForm_INITIALIZING
#if !defined(IL2CPP_STRUCT_WWWForm_DEFINED)
#define IL2CPP_STRUCT_WWWForm_DEFINED
struct WWWForm__Class;
struct WWWForm {
    struct WWWForm__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_WWWForm_FWDDECL)
#define IL2CPP_STRUCT_WWWForm_FWDDECL
#include <Modloader/app/structs/WWWForm__Class.h>
#endif
#undef IL2CPP_STRUCT_WWWForm_INITIALIZING
#if !defined(IL2CPP_STRUCT_WWWForm_DEFINED) && !defined(IL2CPP_STRUCT_WWWForm_FWDDECL)
#include <Modloader/app/structs/WWWForm.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WWWForm.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
