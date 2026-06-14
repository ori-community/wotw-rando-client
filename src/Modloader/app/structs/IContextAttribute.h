#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IContextAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IContextAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_IContextAttribute_DEFINED)
#define IL2CPP_STRUCT_IContextAttribute_DEFINED
struct IContextAttribute__Class;
struct IContextAttribute {
    struct IContextAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IContextAttribute_FWDDECL)
#define IL2CPP_STRUCT_IContextAttribute_FWDDECL
#include <Modloader/app/structs/IContextAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_IContextAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_IContextAttribute_DEFINED) && !defined(IL2CPP_STRUCT_IContextAttribute_FWDDECL)
#include <Modloader/app/structs/IContextAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IContextAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
