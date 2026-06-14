#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinMortality_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinMortality_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinMortality_DEFINED)
#include <Modloader/app/structs/SeinMortality__Fields.h>
#if defined(IL2CPP_STRUCT_SeinMortality__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinMortality_DEFINED
struct SeinMortality__Class;
struct SeinMortality {
    struct SeinMortality__Class* klass;
    MonitorData* monitor;
    struct SeinMortality__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinMortality_FWDDECL)
#define IL2CPP_STRUCT_SeinMortality_FWDDECL
#include <Modloader/app/structs/SeinMortality__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinMortality_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinMortality_DEFINED) && !defined(IL2CPP_STRUCT_SeinMortality_FWDDECL)
#include <Modloader/app/structs/SeinMortality.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinMortality.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
