#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConditionalShowAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConditionalShowAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConditionalShowAttribute_DEFINED)
#include <Modloader/app/structs/ConditionalShowAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_ConditionalShowAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_ConditionalShowAttribute_DEFINED
struct ConditionalShowAttribute__Class;
struct ConditionalShowAttribute {
    struct ConditionalShowAttribute__Class* klass;
    MonitorData* monitor;
    struct ConditionalShowAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConditionalShowAttribute_FWDDECL)
#define IL2CPP_STRUCT_ConditionalShowAttribute_FWDDECL
#include <Modloader/app/structs/ConditionalShowAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_ConditionalShowAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConditionalShowAttribute_DEFINED) && !defined(IL2CPP_STRUCT_ConditionalShowAttribute_FWDDECL)
#include <Modloader/app/structs/ConditionalShowAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConditionalShowAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
