#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConditionalAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConditionalAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConditionalAttribute_DEFINED)
#include <Modloader/app/structs/ConditionalAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_ConditionalAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_ConditionalAttribute_DEFINED
struct ConditionalAttribute__Class;
struct ConditionalAttribute {
    struct ConditionalAttribute__Class* klass;
    MonitorData* monitor;
    struct ConditionalAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConditionalAttribute_FWDDECL)
#define IL2CPP_STRUCT_ConditionalAttribute_FWDDECL
#include <Modloader/app/structs/ConditionalAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_ConditionalAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConditionalAttribute_DEFINED) && !defined(IL2CPP_STRUCT_ConditionalAttribute_FWDDECL)
#include <Modloader/app/structs/ConditionalAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConditionalAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
