#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CustomAttributeBuilder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CustomAttributeBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_CustomAttributeBuilder_DEFINED)
#define IL2CPP_STRUCT_CustomAttributeBuilder_DEFINED
struct CustomAttributeBuilder__Class;
struct CustomAttributeBuilder {
    struct CustomAttributeBuilder__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_CustomAttributeBuilder_FWDDECL)
#define IL2CPP_STRUCT_CustomAttributeBuilder_FWDDECL
#include <Modloader/app/structs/CustomAttributeBuilder__Class.h>
#endif
#undef IL2CPP_STRUCT_CustomAttributeBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_CustomAttributeBuilder_DEFINED) && !defined(IL2CPP_STRUCT_CustomAttributeBuilder_FWDDECL)
#include <Modloader/app/structs/CustomAttributeBuilder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CustomAttributeBuilder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
