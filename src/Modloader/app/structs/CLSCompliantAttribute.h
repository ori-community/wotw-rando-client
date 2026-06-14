#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CLSCompliantAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CLSCompliantAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_CLSCompliantAttribute_DEFINED)
#include <Modloader/app/structs/CLSCompliantAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_CLSCompliantAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_CLSCompliantAttribute_DEFINED
struct CLSCompliantAttribute__Class;
struct CLSCompliantAttribute {
    struct CLSCompliantAttribute__Class* klass;
    MonitorData* monitor;
    struct CLSCompliantAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CLSCompliantAttribute_FWDDECL)
#define IL2CPP_STRUCT_CLSCompliantAttribute_FWDDECL
#include <Modloader/app/structs/CLSCompliantAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_CLSCompliantAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_CLSCompliantAttribute_DEFINED) && !defined(IL2CPP_STRUCT_CLSCompliantAttribute_FWDDECL)
#include <Modloader/app/structs/CLSCompliantAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CLSCompliantAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
