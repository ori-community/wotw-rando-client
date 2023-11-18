#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ICustomFormatter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ICustomFormatter_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICustomFormatter_DEFINED)
#define IL2CPP_STRUCT_ICustomFormatter_DEFINED
struct ICustomFormatter__Class;
struct ICustomFormatter {
    struct ICustomFormatter__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ICustomFormatter_FWDDECL)
#define IL2CPP_STRUCT_ICustomFormatter_FWDDECL
#include <Modloader/app/structs/ICustomFormatter__Class.h>
#endif
#undef IL2CPP_STRUCT_ICustomFormatter_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICustomFormatter_DEFINED) && !defined(IL2CPP_STRUCT_ICustomFormatter_FWDDECL)
#include <Modloader/app/structs/ICustomFormatter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ICustomFormatter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
