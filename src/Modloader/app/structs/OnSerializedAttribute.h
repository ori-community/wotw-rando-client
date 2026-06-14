#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OnSerializedAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OnSerializedAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnSerializedAttribute_DEFINED)
#define IL2CPP_STRUCT_OnSerializedAttribute_DEFINED
struct OnSerializedAttribute__Class;
struct OnSerializedAttribute {
    struct OnSerializedAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_OnSerializedAttribute_FWDDECL)
#define IL2CPP_STRUCT_OnSerializedAttribute_FWDDECL
#include <Modloader/app/structs/OnSerializedAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_OnSerializedAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnSerializedAttribute_DEFINED) && !defined(IL2CPP_STRUCT_OnSerializedAttribute_FWDDECL)
#include <Modloader/app/structs/OnSerializedAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OnSerializedAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
