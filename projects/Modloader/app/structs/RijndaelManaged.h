#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RijndaelManaged_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RijndaelManaged_INITIALIZING
#if !defined(IL2CPP_STRUCT_RijndaelManaged_DEFINED)
#include <Modloader/app/structs/RijndaelManaged__Fields.h>
#if defined(IL2CPP_STRUCT_RijndaelManaged__Fields_DEFINED)
#define IL2CPP_STRUCT_RijndaelManaged_DEFINED
struct RijndaelManaged__Class;
struct RijndaelManaged {
    struct RijndaelManaged__Class* klass;
    MonitorData* monitor;
    struct RijndaelManaged__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RijndaelManaged_FWDDECL)
#define IL2CPP_STRUCT_RijndaelManaged_FWDDECL
#include <Modloader/app/structs/RijndaelManaged__Class.h>
#endif
#undef IL2CPP_STRUCT_RijndaelManaged_INITIALIZING
#if !defined(IL2CPP_STRUCT_RijndaelManaged_DEFINED) && !defined(IL2CPP_STRUCT_RijndaelManaged_FWDDECL)
#include <Modloader/app/structs/RijndaelManaged.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RijndaelManaged.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
