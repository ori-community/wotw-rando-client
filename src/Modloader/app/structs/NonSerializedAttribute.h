#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NonSerializedAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NonSerializedAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_NonSerializedAttribute_DEFINED)
#define IL2CPP_STRUCT_NonSerializedAttribute_DEFINED
struct NonSerializedAttribute__Class;
struct NonSerializedAttribute {
    struct NonSerializedAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_NonSerializedAttribute_FWDDECL)
#define IL2CPP_STRUCT_NonSerializedAttribute_FWDDECL
#include <Modloader/app/structs/NonSerializedAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_NonSerializedAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_NonSerializedAttribute_DEFINED) && !defined(IL2CPP_STRUCT_NonSerializedAttribute_FWDDECL)
#include <Modloader/app/structs/NonSerializedAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NonSerializedAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
