#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RecordableObjectPuppet__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RecordableObjectPuppet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecordableObjectPuppet__Fields_DEFINED)
#include <Modloader/app/structs/GenericPuppet__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_GenericPuppet__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_RecordableObjectPuppet__Fields_DEFINED
struct RecordingLink;
struct RecordableObjectPuppet__Fields {
    struct GenericPuppet__Fields _;
    struct RecordingLink* m_recordingLink;
    int32_t m_uniqueRecordingId;
    struct Vector3 m_lastPosition;
    bool m_isInteracting;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RecordableObjectPuppet__Fields_FWDDECL)
#define IL2CPP_STRUCT_RecordableObjectPuppet__Fields_FWDDECL
#include <Modloader/app/structs/RecordingLink.h>
#endif
#undef IL2CPP_STRUCT_RecordableObjectPuppet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecordableObjectPuppet__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RecordableObjectPuppet__Fields_FWDDECL)
#include <Modloader/app/structs/RecordableObjectPuppet__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RecordableObjectPuppet__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
