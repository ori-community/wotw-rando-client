#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PropertyAnalysis__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PropertyAnalysis__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PropertyAnalysis__Fields_DEFINED)
#define IL2CPP_STRUCT_PropertyAnalysis__Fields_DEFINED
struct String;
struct MethodInfo_1;
struct TraceLoggingTypeInfo;
struct EventFieldAttribute;
struct __declspec(align(8)) PropertyAnalysis__Fields {
    struct String* name;
    struct MethodInfo_1* getterInfo;
    struct TraceLoggingTypeInfo* typeInfo;
    struct EventFieldAttribute* fieldAttribute;
};
#endif
#if !defined(IL2CPP_STRUCT_PropertyAnalysis__Fields_FWDDECL)
#define IL2CPP_STRUCT_PropertyAnalysis__Fields_FWDDECL
#include <Modloader/app/structs/EventFieldAttribute.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TraceLoggingTypeInfo.h>
#endif
#undef IL2CPP_STRUCT_PropertyAnalysis__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PropertyAnalysis__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PropertyAnalysis__Fields_FWDDECL)
#include <Modloader/app/structs/PropertyAnalysis__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PropertyAnalysis__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
