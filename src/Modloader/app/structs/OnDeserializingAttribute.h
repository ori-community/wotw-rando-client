#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OnDeserializingAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OnDeserializingAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnDeserializingAttribute_DEFINED)
#define IL2CPP_STRUCT_OnDeserializingAttribute_DEFINED
struct OnDeserializingAttribute__Class;
struct OnDeserializingAttribute {
    struct OnDeserializingAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_OnDeserializingAttribute_FWDDECL)
#define IL2CPP_STRUCT_OnDeserializingAttribute_FWDDECL
#include <Modloader/app/structs/OnDeserializingAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_OnDeserializingAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnDeserializingAttribute_DEFINED) && !defined(IL2CPP_STRUCT_OnDeserializingAttribute_FWDDECL)
#include <Modloader/app/structs/OnDeserializingAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OnDeserializingAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
