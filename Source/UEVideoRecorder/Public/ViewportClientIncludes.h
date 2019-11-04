#pragma once
#pragma warning(default : 4668)
#include "Engine/GameViewportClient.h"
#include "AllowWindowsPlatformTypes.h"
#include <type_traits>
#include <utility>
#include <memory>
#include <deque>
#include <forward_list>
#include <iostream>
#include <string>
#include <mutex>
#include <cstdint>
#include <d3d11.h>
#include <wrl/client.h>
#include "boost/iostreams/concepts.hpp"
#include "boost/iostreams/stream_buffer.hpp"
#include "VideoRecorder.h"