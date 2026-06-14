#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberStateMatcherAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberStateMatcherAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateMatcherAttribute_DEFINED)
#include <Modloader/app/structs/UberStateMatcherAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_UberStateMatcherAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_UberStateMatcherAttribute_DEFINED
struct UberStateMatcherAttribute__Class;
struct UberStateMatcherAttribute {
    struct UberStateMatcherAttribute__Class* klass;
    MonitorData* monitor;
    struct UberStateMatcherAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberStateMatcherAttribute_FWDDECL)
#define IL2CPP_STRUCT_UberStateMatcherAttribute_FWDDECL
#include <Modloader/app/structs/UberStateMatcherAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_UberStateMatcherAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateMatcherAttribute_DEFINED) && !defined(IL2CPP_STRUCT_UberStateMatcherAttribute_FWDDECL)
#include <Modloader/app/structs/UberStateMatcherAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberStateMatcherAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
