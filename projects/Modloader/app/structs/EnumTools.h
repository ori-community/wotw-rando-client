#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnumTools_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnumTools_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnumTools_DEFINED)
#define IL2CPP_STRUCT_EnumTools_DEFINED
struct EnumTools__Class;
struct EnumTools {
    struct EnumTools__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_EnumTools_FWDDECL)
#define IL2CPP_STRUCT_EnumTools_FWDDECL
#include <Modloader/app/structs/EnumTools__Class.h>
#endif
#undef IL2CPP_STRUCT_EnumTools_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnumTools_DEFINED) && !defined(IL2CPP_STRUCT_EnumTools_FWDDECL)
#include <Modloader/app/structs/EnumTools.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnumTools.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
