#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnyConditions_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnyConditions_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnyConditions_DEFINED)
#include <Modloader/app/structs/AnyConditions__Fields.h>
#if defined(IL2CPP_STRUCT_AnyConditions__Fields_DEFINED)
#define IL2CPP_STRUCT_AnyConditions_DEFINED
struct AnyConditions__Class;
struct AnyConditions {
    struct AnyConditions__Class* klass;
    MonitorData* monitor;
    struct AnyConditions__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnyConditions_FWDDECL)
#define IL2CPP_STRUCT_AnyConditions_FWDDECL
#include <Modloader/app/structs/AnyConditions__Class.h>
#endif
#undef IL2CPP_STRUCT_AnyConditions_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnyConditions_DEFINED) && !defined(IL2CPP_STRUCT_AnyConditions_FWDDECL)
#include <Modloader/app/structs/AnyConditions.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnyConditions.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
