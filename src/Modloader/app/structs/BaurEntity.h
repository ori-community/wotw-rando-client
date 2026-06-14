#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BaurEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BaurEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaurEntity_DEFINED)
#include <Modloader/app/structs/BaurEntity__Fields.h>
#if defined(IL2CPP_STRUCT_BaurEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_BaurEntity_DEFINED
struct BaurEntity__Class;
struct BaurEntity {
    struct BaurEntity__Class* klass;
    MonitorData* monitor;
    struct BaurEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BaurEntity_FWDDECL)
#define IL2CPP_STRUCT_BaurEntity_FWDDECL
#include <Modloader/app/structs/BaurEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_BaurEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaurEntity_DEFINED) && !defined(IL2CPP_STRUCT_BaurEntity_FWDDECL)
#include <Modloader/app/structs/BaurEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BaurEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
