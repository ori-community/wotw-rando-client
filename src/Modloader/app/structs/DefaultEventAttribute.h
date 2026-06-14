#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DefaultEventAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DefaultEventAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultEventAttribute_DEFINED)
#include <Modloader/app/structs/DefaultEventAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_DefaultEventAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_DefaultEventAttribute_DEFINED
struct DefaultEventAttribute__Class;
struct DefaultEventAttribute {
    struct DefaultEventAttribute__Class* klass;
    MonitorData* monitor;
    struct DefaultEventAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DefaultEventAttribute_FWDDECL)
#define IL2CPP_STRUCT_DefaultEventAttribute_FWDDECL
#include <Modloader/app/structs/DefaultEventAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_DefaultEventAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultEventAttribute_DEFINED) && !defined(IL2CPP_STRUCT_DefaultEventAttribute_FWDDECL)
#include <Modloader/app/structs/DefaultEventAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DefaultEventAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
