#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NativeSetThreadIndexAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NativeSetThreadIndexAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativeSetThreadIndexAttribute_DEFINED)
#define IL2CPP_STRUCT_NativeSetThreadIndexAttribute_DEFINED
struct NativeSetThreadIndexAttribute__Class;
struct NativeSetThreadIndexAttribute {
    struct NativeSetThreadIndexAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_NativeSetThreadIndexAttribute_FWDDECL)
#define IL2CPP_STRUCT_NativeSetThreadIndexAttribute_FWDDECL
#include <Modloader/app/structs/NativeSetThreadIndexAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_NativeSetThreadIndexAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativeSetThreadIndexAttribute_DEFINED) && !defined(IL2CPP_STRUCT_NativeSetThreadIndexAttribute_FWDDECL)
#include <Modloader/app/structs/NativeSetThreadIndexAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NativeSetThreadIndexAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
