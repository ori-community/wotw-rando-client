#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OnDeserializedAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OnDeserializedAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnDeserializedAttribute_DEFINED)
#define IL2CPP_STRUCT_OnDeserializedAttribute_DEFINED
struct OnDeserializedAttribute__Class;
struct OnDeserializedAttribute {
    struct OnDeserializedAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_OnDeserializedAttribute_FWDDECL)
#define IL2CPP_STRUCT_OnDeserializedAttribute_FWDDECL
#include <Modloader/app/structs/OnDeserializedAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_OnDeserializedAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnDeserializedAttribute_DEFINED) && !defined(IL2CPP_STRUCT_OnDeserializedAttribute_FWDDECL)
#include <Modloader/app/structs/OnDeserializedAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OnDeserializedAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
