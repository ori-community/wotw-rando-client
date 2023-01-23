#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ICryptoTransform_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ICryptoTransform_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICryptoTransform_DEFINED)
#define IL2CPP_STRUCT_ICryptoTransform_DEFINED
struct ICryptoTransform__Class;
struct ICryptoTransform {
    struct ICryptoTransform__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ICryptoTransform_FWDDECL)
#define IL2CPP_STRUCT_ICryptoTransform_FWDDECL
#include <Modloader/app/structs/ICryptoTransform__Class.h>
#endif
#undef IL2CPP_STRUCT_ICryptoTransform_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICryptoTransform_DEFINED) && !defined(IL2CPP_STRUCT_ICryptoTransform_FWDDECL)
#include <Modloader/app/structs/ICryptoTransform.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ICryptoTransform.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
