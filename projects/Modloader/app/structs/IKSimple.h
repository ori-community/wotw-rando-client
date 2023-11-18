#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKSimple_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKSimple_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSimple_DEFINED)
#include <Modloader/app/structs/IKSimple__Fields.h>
#if defined(IL2CPP_STRUCT_IKSimple__Fields_DEFINED)
#define IL2CPP_STRUCT_IKSimple_DEFINED
struct IKSimple__Class;
struct IKSimple {
    struct IKSimple__Class* klass;
    MonitorData* monitor;
    struct IKSimple__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IKSimple_FWDDECL)
#define IL2CPP_STRUCT_IKSimple_FWDDECL
#include <Modloader/app/structs/IKSimple__Class.h>
#endif
#undef IL2CPP_STRUCT_IKSimple_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSimple_DEFINED) && !defined(IL2CPP_STRUCT_IKSimple_FWDDECL)
#include <Modloader/app/structs/IKSimple.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKSimple.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
