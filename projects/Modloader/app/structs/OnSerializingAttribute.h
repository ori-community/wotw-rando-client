#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OnSerializingAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OnSerializingAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnSerializingAttribute_DEFINED)
#define IL2CPP_STRUCT_OnSerializingAttribute_DEFINED
struct OnSerializingAttribute__Class;
struct OnSerializingAttribute {
    struct OnSerializingAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_OnSerializingAttribute_FWDDECL)
#define IL2CPP_STRUCT_OnSerializingAttribute_FWDDECL
#include <Modloader/app/structs/OnSerializingAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_OnSerializingAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnSerializingAttribute_DEFINED) && !defined(IL2CPP_STRUCT_OnSerializingAttribute_FWDDECL)
#include <Modloader/app/structs/OnSerializingAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OnSerializingAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
