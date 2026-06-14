#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EmbeddedAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EmbeddedAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_EmbeddedAttribute_DEFINED)
#define IL2CPP_STRUCT_EmbeddedAttribute_DEFINED
struct EmbeddedAttribute__Class;
struct EmbeddedAttribute {
    struct EmbeddedAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_EmbeddedAttribute_FWDDECL)
#define IL2CPP_STRUCT_EmbeddedAttribute_FWDDECL
#include <Modloader/app/structs/EmbeddedAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_EmbeddedAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_EmbeddedAttribute_DEFINED) && !defined(IL2CPP_STRUCT_EmbeddedAttribute_FWDDECL)
#include <Modloader/app/structs/EmbeddedAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EmbeddedAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
