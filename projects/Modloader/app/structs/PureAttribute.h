#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PureAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PureAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_PureAttribute_DEFINED)
#define IL2CPP_STRUCT_PureAttribute_DEFINED
struct PureAttribute__Class;
struct PureAttribute {
    struct PureAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_PureAttribute_FWDDECL)
#define IL2CPP_STRUCT_PureAttribute_FWDDECL
#include <Modloader/app/structs/PureAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_PureAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_PureAttribute_DEFINED) && !defined(IL2CPP_STRUCT_PureAttribute_FWDDECL)
#include <Modloader/app/structs/PureAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PureAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
