#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KwolokChase_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KwolokChase_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokChase_DEFINED)
#include <Modloader/app/structs/KwolokChase__Fields.h>
#if defined(IL2CPP_STRUCT_KwolokChase__Fields_DEFINED)
#define IL2CPP_STRUCT_KwolokChase_DEFINED
struct KwolokChase__Class;
struct KwolokChase {
    struct KwolokChase__Class* klass;
    MonitorData* monitor;
    struct KwolokChase__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KwolokChase_FWDDECL)
#define IL2CPP_STRUCT_KwolokChase_FWDDECL
#include <Modloader/app/structs/KwolokChase__Class.h>
#endif
#undef IL2CPP_STRUCT_KwolokChase_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokChase_DEFINED) && !defined(IL2CPP_STRUCT_KwolokChase_FWDDECL)
#include <Modloader/app/structs/KwolokChase.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KwolokChase.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
