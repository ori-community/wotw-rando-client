#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StringFreezingAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StringFreezingAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringFreezingAttribute_DEFINED)
#define IL2CPP_STRUCT_StringFreezingAttribute_DEFINED
struct StringFreezingAttribute__Class;
struct StringFreezingAttribute {
    struct StringFreezingAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_StringFreezingAttribute_FWDDECL)
#define IL2CPP_STRUCT_StringFreezingAttribute_FWDDECL
#include <Modloader/app/structs/StringFreezingAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_StringFreezingAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringFreezingAttribute_DEFINED) && !defined(IL2CPP_STRUCT_StringFreezingAttribute_FWDDECL)
#include <Modloader/app/structs/StringFreezingAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StringFreezingAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
