#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FixedBufferAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FixedBufferAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_FixedBufferAttribute_DEFINED)
#include <Modloader/app/structs/FixedBufferAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_FixedBufferAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_FixedBufferAttribute_DEFINED
struct FixedBufferAttribute__Class;
struct FixedBufferAttribute {
    struct FixedBufferAttribute__Class* klass;
    MonitorData* monitor;
    struct FixedBufferAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FixedBufferAttribute_FWDDECL)
#define IL2CPP_STRUCT_FixedBufferAttribute_FWDDECL
#include <Modloader/app/structs/FixedBufferAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_FixedBufferAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_FixedBufferAttribute_DEFINED) && !defined(IL2CPP_STRUCT_FixedBufferAttribute_FWDDECL)
#include <Modloader/app/structs/FixedBufferAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FixedBufferAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
