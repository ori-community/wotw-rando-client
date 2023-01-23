#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_InAttribute_DEFINED)
#define IL2CPP_STRUCT_InAttribute_DEFINED
struct InAttribute__Class;
struct InAttribute {
    struct InAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_InAttribute_FWDDECL)
#define IL2CPP_STRUCT_InAttribute_FWDDECL
#include <Modloader/app/structs/InAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_InAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_InAttribute_DEFINED) && !defined(IL2CPP_STRUCT_InAttribute_FWDDECL)
#include <Modloader/app/structs/InAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
