#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FrameCaptureTester__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FrameCaptureTester__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameCaptureTester__StaticFields_DEFINED)
#define IL2CPP_STRUCT_FrameCaptureTester__StaticFields_DEFINED
struct String;
struct FrameCaptureTester;
struct GameObject;
struct FrameCaptureTester__StaticFields {
    struct String* LastOutputFileName;
    bool _EnableObjectProfiling_k__BackingField;
    bool _FlushedThisFrame_k__BackingField;
    struct FrameCaptureTester* s_Instance;
    struct GameObject* m_manualRecordingInstance;
};
#endif
#if !defined(IL2CPP_STRUCT_FrameCaptureTester__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_FrameCaptureTester__StaticFields_FWDDECL
#include <Modloader/app/structs/FrameCaptureTester.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_FrameCaptureTester__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameCaptureTester__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_FrameCaptureTester__StaticFields_FWDDECL)
#include <Modloader/app/structs/FrameCaptureTester__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FrameCaptureTester__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
