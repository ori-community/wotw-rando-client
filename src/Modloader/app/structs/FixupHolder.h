#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FixupHolder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FixupHolder_INITIALIZING
#if !defined(IL2CPP_STRUCT_FixupHolder_DEFINED)
#include <Modloader/app/structs/FixupHolder__Fields.h>
#if defined(IL2CPP_STRUCT_FixupHolder__Fields_DEFINED)
#define IL2CPP_STRUCT_FixupHolder_DEFINED
struct FixupHolder__Class;
struct FixupHolder {
    struct FixupHolder__Class* klass;
    MonitorData* monitor;
    struct FixupHolder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FixupHolder_FWDDECL)
#define IL2CPP_STRUCT_FixupHolder_FWDDECL
#include <Modloader/app/structs/FixupHolder__Class.h>
#endif
#undef IL2CPP_STRUCT_FixupHolder_INITIALIZING
#if !defined(IL2CPP_STRUCT_FixupHolder_DEFINED) && !defined(IL2CPP_STRUCT_FixupHolder_FWDDECL)
#include <Modloader/app/structs/FixupHolder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FixupHolder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
