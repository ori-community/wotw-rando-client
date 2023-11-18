#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IFormattable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IFormattable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IFormattable_DEFINED)
#define IL2CPP_STRUCT_IFormattable_DEFINED
struct IFormattable__Class;
struct IFormattable {
    struct IFormattable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IFormattable_FWDDECL)
#define IL2CPP_STRUCT_IFormattable_FWDDECL
#include <Modloader/app/structs/IFormattable__Class.h>
#endif
#undef IL2CPP_STRUCT_IFormattable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IFormattable_DEFINED) && !defined(IL2CPP_STRUCT_IFormattable_FWDDECL)
#include <Modloader/app/structs/IFormattable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IFormattable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
