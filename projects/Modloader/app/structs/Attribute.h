#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Attribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Attribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_Attribute_DEFINED)
#define IL2CPP_STRUCT_Attribute_DEFINED
struct Attribute__Class;
struct Attribute {
    struct Attribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Attribute_FWDDECL)
#define IL2CPP_STRUCT_Attribute_FWDDECL
#include <Modloader/app/structs/Attribute__Class.h>
#endif
#undef IL2CPP_STRUCT_Attribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_Attribute_DEFINED) && !defined(IL2CPP_STRUCT_Attribute_FWDDECL)
#include <Modloader/app/structs/Attribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Attribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
