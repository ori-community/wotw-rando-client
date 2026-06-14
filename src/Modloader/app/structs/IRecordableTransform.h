#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IRecordableTransform_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IRecordableTransform_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRecordableTransform_DEFINED)
#define IL2CPP_STRUCT_IRecordableTransform_DEFINED
struct IRecordableTransform__Class;
struct IRecordableTransform {
    struct IRecordableTransform__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IRecordableTransform_FWDDECL)
#define IL2CPP_STRUCT_IRecordableTransform_FWDDECL
#include <Modloader/app/structs/IRecordableTransform__Class.h>
#endif
#undef IL2CPP_STRUCT_IRecordableTransform_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRecordableTransform_DEFINED) && !defined(IL2CPP_STRUCT_IRecordableTransform_FWDDECL)
#include <Modloader/app/structs/IRecordableTransform.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IRecordableTransform.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
