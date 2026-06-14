#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FrogEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FrogEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrogEntity_DEFINED)
#include <Modloader/app/structs/FrogEntity__Fields.h>
#if defined(IL2CPP_STRUCT_FrogEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_FrogEntity_DEFINED
struct FrogEntity__Class;
struct FrogEntity {
    struct FrogEntity__Class* klass;
    MonitorData* monitor;
    struct FrogEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FrogEntity_FWDDECL)
#define IL2CPP_STRUCT_FrogEntity_FWDDECL
#include <Modloader/app/structs/FrogEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_FrogEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrogEntity_DEFINED) && !defined(IL2CPP_STRUCT_FrogEntity_FWDDECL)
#include <Modloader/app/structs/FrogEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FrogEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
