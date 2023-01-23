#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IConvertible_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IConvertible_INITIALIZING
#if !defined(IL2CPP_STRUCT_IConvertible_DEFINED)
#define IL2CPP_STRUCT_IConvertible_DEFINED
struct IConvertible__Class;
struct IConvertible {
    struct IConvertible__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IConvertible_FWDDECL)
#define IL2CPP_STRUCT_IConvertible_FWDDECL
#include <Modloader/app/structs/IConvertible__Class.h>
#endif
#undef IL2CPP_STRUCT_IConvertible_INITIALIZING
#if !defined(IL2CPP_STRUCT_IConvertible_DEFINED) && !defined(IL2CPP_STRUCT_IConvertible_FWDDECL)
#include <Modloader/app/structs/IConvertible.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IConvertible.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
