#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ObjectIDGenerator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ObjectIDGenerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectIDGenerator_DEFINED)
#include <Modloader/app/structs/ObjectIDGenerator__Fields.h>
#if defined(IL2CPP_STRUCT_ObjectIDGenerator__Fields_DEFINED)
#define IL2CPP_STRUCT_ObjectIDGenerator_DEFINED
struct ObjectIDGenerator__Class;
struct ObjectIDGenerator {
    struct ObjectIDGenerator__Class* klass;
    MonitorData* monitor;
    struct ObjectIDGenerator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ObjectIDGenerator_FWDDECL)
#define IL2CPP_STRUCT_ObjectIDGenerator_FWDDECL
#include <Modloader/app/structs/ObjectIDGenerator__Class.h>
#endif
#undef IL2CPP_STRUCT_ObjectIDGenerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectIDGenerator_DEFINED) && !defined(IL2CPP_STRUCT_ObjectIDGenerator_FWDDECL)
#include <Modloader/app/structs/ObjectIDGenerator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ObjectIDGenerator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
