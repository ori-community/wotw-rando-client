#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinBow_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinBow_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinBow_DEFINED)
#include <Modloader/app/structs/SeinBow__Fields.h>
#if defined(IL2CPP_STRUCT_SeinBow__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinBow_DEFINED
struct SeinBow__Class;
struct SeinBow {
    struct SeinBow__Class* klass;
    MonitorData* monitor;
    struct SeinBow__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinBow_FWDDECL)
#define IL2CPP_STRUCT_SeinBow_FWDDECL
#include <Modloader/app/structs/SeinBow__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinBow_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinBow_DEFINED) && !defined(IL2CPP_STRUCT_SeinBow_FWDDECL)
#include <Modloader/app/structs/SeinBow.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinBow.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
