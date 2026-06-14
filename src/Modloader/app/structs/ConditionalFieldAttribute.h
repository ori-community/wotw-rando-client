#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConditionalFieldAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConditionalFieldAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConditionalFieldAttribute_DEFINED)
#include <Modloader/app/structs/ConditionalFieldAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_ConditionalFieldAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_ConditionalFieldAttribute_DEFINED
struct ConditionalFieldAttribute__Class;
struct ConditionalFieldAttribute {
    struct ConditionalFieldAttribute__Class* klass;
    MonitorData* monitor;
    struct ConditionalFieldAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConditionalFieldAttribute_FWDDECL)
#define IL2CPP_STRUCT_ConditionalFieldAttribute_FWDDECL
#include <Modloader/app/structs/ConditionalFieldAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_ConditionalFieldAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConditionalFieldAttribute_DEFINED) && !defined(IL2CPP_STRUCT_ConditionalFieldAttribute_FWDDECL)
#include <Modloader/app/structs/ConditionalFieldAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConditionalFieldAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
