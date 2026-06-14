#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConditionalPlatform_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConditionalPlatform_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConditionalPlatform_DEFINED)
#include <Modloader/app/structs/ConditionalPlatform__Fields.h>
#if defined(IL2CPP_STRUCT_ConditionalPlatform__Fields_DEFINED)
#define IL2CPP_STRUCT_ConditionalPlatform_DEFINED
struct ConditionalPlatform__Class;
struct ConditionalPlatform {
    struct ConditionalPlatform__Class* klass;
    MonitorData* monitor;
    struct ConditionalPlatform__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConditionalPlatform_FWDDECL)
#define IL2CPP_STRUCT_ConditionalPlatform_FWDDECL
#include <Modloader/app/structs/ConditionalPlatform__Class.h>
#endif
#undef IL2CPP_STRUCT_ConditionalPlatform_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConditionalPlatform_DEFINED) && !defined(IL2CPP_STRUCT_ConditionalPlatform_FWDDECL)
#include <Modloader/app/structs/ConditionalPlatform.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConditionalPlatform.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
