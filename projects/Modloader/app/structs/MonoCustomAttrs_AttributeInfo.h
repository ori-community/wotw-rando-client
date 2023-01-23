#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoCustomAttrs_AttributeInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoCustomAttrs_AttributeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoCustomAttrs_AttributeInfo_DEFINED)
#include <Modloader/app/structs/MonoCustomAttrs_AttributeInfo__Fields.h>
#if defined(IL2CPP_STRUCT_MonoCustomAttrs_AttributeInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_MonoCustomAttrs_AttributeInfo_DEFINED
struct MonoCustomAttrs_AttributeInfo__Class;
struct MonoCustomAttrs_AttributeInfo {
    struct MonoCustomAttrs_AttributeInfo__Class* klass;
    MonitorData* monitor;
    struct MonoCustomAttrs_AttributeInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MonoCustomAttrs_AttributeInfo_FWDDECL)
#define IL2CPP_STRUCT_MonoCustomAttrs_AttributeInfo_FWDDECL
#include <Modloader/app/structs/MonoCustomAttrs_AttributeInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_MonoCustomAttrs_AttributeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoCustomAttrs_AttributeInfo_DEFINED) && !defined(IL2CPP_STRUCT_MonoCustomAttrs_AttributeInfo_FWDDECL)
#include <Modloader/app/structs/MonoCustomAttrs_AttributeInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoCustomAttrs_AttributeInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
