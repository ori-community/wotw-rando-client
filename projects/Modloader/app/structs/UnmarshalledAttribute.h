#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnmarshalledAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnmarshalledAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnmarshalledAttribute_DEFINED)
#define IL2CPP_STRUCT_UnmarshalledAttribute_DEFINED
struct UnmarshalledAttribute__Class;
struct UnmarshalledAttribute {
    struct UnmarshalledAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_UnmarshalledAttribute_FWDDECL)
#define IL2CPP_STRUCT_UnmarshalledAttribute_FWDDECL
#include <Modloader/app/structs/UnmarshalledAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_UnmarshalledAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnmarshalledAttribute_DEFINED) && !defined(IL2CPP_STRUCT_UnmarshalledAttribute_FWDDECL)
#include <Modloader/app/structs/UnmarshalledAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnmarshalledAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
